#pragma once

#include "nn/sf/client_session.hpp"

namespace nn::sf {

class HipcSimpleClientSessionManager
  : public hipc::client::SessionManagerStorage {};

}
