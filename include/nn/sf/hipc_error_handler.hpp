#pragma once

#include "nn/result.hpp"

namespace nn::sf::hipc {

using ClientErrorHandler = void (*)(Result);
extern ClientErrorHandler ClientErrorCallback;
ClientErrorHandler SetHipcErrorHandlerOnClient(ClientErrorHandler handler);

}
