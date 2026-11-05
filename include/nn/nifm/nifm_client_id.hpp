#pragma once

#include "nn/nifm/nifm_types.hpp"

namespace nn::nifm {

ClientId GetClientId();
bool IsAnyInternetRequestAccepted(ClientId clientId);

}
