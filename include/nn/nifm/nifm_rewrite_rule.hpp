#pragma once

#include <stdint.h>

#include "nn/nifm/nifm_types.hpp"

namespace nn::nifm {

class RewriteRule {
 public:
  RewriteRule();

  void SetAction(const char* action);
  void SetFilter(const char* filter);
  void SetPriority(int priority);
  void SetDirection(PacketDirection direction);

  char action[510];
  char filter[510];
  int32_t priority;
  PacketDirection direction;
};

}
