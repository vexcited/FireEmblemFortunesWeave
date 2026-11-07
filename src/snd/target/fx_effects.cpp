#include "snd/target/fx.hpp"

namespace snd::target {

int EQEffect::getLatency() const {
  return latency_;
}

void PCMPlayerEffect::setLatency(int latency) {
  latency_ = latency;
}

int PCMPlayerEffect::getLatency() const {
  return latency_;
}

}
