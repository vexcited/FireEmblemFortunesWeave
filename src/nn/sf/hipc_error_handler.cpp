#include "nn/sf/hipc_error_handler.hpp"

namespace nn::sf::hipc {

ClientErrorHandler ClientErrorCallback;
ServerErrorHandler ServerErrorCallback;

ClientErrorHandler SetHipcErrorHandlerOnClient(ClientErrorHandler handler) {
  ClientErrorCallback = handler;
  return handler;
}

namespace detail {

void HandleHipcErrorOnClient(Result result) {
  if (ClientErrorHandler handler = ClientErrorCallback) {
    handler(result);
  }
}

void HandleHipcErrorOnServer(Result result) {
  if (ServerErrorHandler handler = ServerErrorCallback) {
    handler(result);
  }
}

}

}
