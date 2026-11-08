#pragma once

#include "nn/result.hpp"

namespace nn::sf::hipc {

using ClientErrorHandler = void (*)(Result);
using ServerErrorHandler = void (*)(Result);
extern ClientErrorHandler ClientErrorCallback;
extern ServerErrorHandler ServerErrorCallback;
ClientErrorHandler SetHipcErrorHandlerOnClient(ClientErrorHandler handler);
void SetHipcErrorHandlerOnServer(ServerErrorHandler handler);

namespace detail {

void HandleHipcErrorOnClient(Result result);
void HandleHipcErrorOnServer(Result result);

}

}
