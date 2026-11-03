#include "nn/sf/hipc_error_handler.hpp"

namespace nn::sf::hipc {

ClientErrorHandler ClientErrorCallback;

ClientErrorHandler SetHipcErrorHandlerOnClient(ClientErrorHandler handler) {
  ClientErrorCallback = handler;
  return handler;
}

}
